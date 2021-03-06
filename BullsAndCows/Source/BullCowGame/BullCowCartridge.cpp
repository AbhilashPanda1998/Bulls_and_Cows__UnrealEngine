// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"
#include "HiddenWordList.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();


    

    Isograms = GetValidWords(Words);

    SetupGame();
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    if (bGameOver)
    {
        ClearScreen();
        SetupGame();
    }

    else //Checking PlayerGuess
    {
        ProcessGuess(Input);
    }
}

void UBullCowCartridge::SetupGame()
{
    //Welcomes Player
    PrintLine(TEXT("Welcome to Bulls And Cows!!!"));
    HiddenWord = Isograms[FMath::RandRange(0, Isograms.Num() - 1)];
    Lives = HiddenWord.Len();
    bGameOver = false;

    PrintLine(TEXT("Guess the %i Letter Word!"), HiddenWord.Len());
    PrintLine(TEXT("You have %i Lives"), Lives);
    PrintLine(TEXT("Type in your guess.\nPress enter to continue..."));
    PrintLine(TEXT("The HiddenWord is: %s."), *HiddenWord);
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("\nPress Enter to Play Again."));
}

void UBullCowCartridge::ProcessGuess(const FString &Guess)
{
    if (Guess == HiddenWord)
    {
        PrintLine(TEXT("You Won"));
        EndGame();
        return;
    }

    //If not same no of characters
    if (Guess.Len() != HiddenWord.Len())
    {
        PrintLine(TEXT("The Hidden word is %i letters long."), HiddenWord.Len());
        PrintLine(TEXT("Sorry, try guessing again, \nYou have %i Lives remaining."), Lives);
        return;
    }

    //IF Isogram
    if (!IsIsogram(Guess))
    {
        PrintLine(TEXT("No Repeating Letters, guess again"));
        return;
    }

    // Remove a Life
    Lives--;
    PrintLine(TEXT("Lost a life!"));

    if (Lives <= 0)
    {
        ClearScreen();
        PrintLine(TEXT("You have no lives remaining."));
        PrintLine(TEXT("The Hidden word was : %s"), *HiddenWord);
        EndGame();
        return;
    }

    //Show the Player Bulls and Cows

    // int32 Bulls = 2;
    // int32 Cows = 3;

    int32 Bulls, Cows;
    FBullCowCount Score = GetBullCows(Guess, Bulls, Cows);

    PrintLine(TEXT("You have %i Bulls and %i Cows"), Score.Bulls, Score.Cows);

    PrintLine(TEXT("Guess again, you have %i lives left"), Lives);
}

bool UBullCowCartridge::IsIsogram(const FString &Word) const
{

    for (int32 Index = 0; Index < Word.Len(); Index++)
    {
        for (int32 Comparison = Index + 1; Comparison < Word.Len(); Comparison++)
        {
            if (Word[Index] == Word[Comparison])
            {
                return false;
            }
        }
    }

    return true;
}

TArray<FString> UBullCowCartridge::GetValidWords(const TArray<FString> &UnfilteredWords) const
{

    TArray<FString> ValidWords;
    for (FString Word : UnfilteredWords)
    {
        if (Word.Len() >= 4 && Word.Len() <= 8 && IsIsogram(Word))
        {
            ValidWords.Emplace(Word);
        }
    }
    return ValidWords;
}

FBullCowCount UBullCowCartridge::GetBullCows(const FString &Guess, int32 &BullCount, int32 &CowCount) const
{
    FBullCowCount Count;

    BullCount = 0;
    CowCount = 0;

    // for every index Guess is same as index Hidden, BullCount ++
    // if not a bull was it a cow? if yes CowCount ++

    for (int32 GuessIndex = 0; GuessIndex < Guess.Len(); GuessIndex++)
    {
        if (Guess[GuessIndex] == HiddenWord[GuessIndex])
        {
            Count.Bulls++;
            continue;
        }

        for (int32 HiddenIndex = 0; HiddenIndex < HiddenWord.Len(); HiddenIndex++)
        {
            if (Guess[GuessIndex] == HiddenWord[HiddenIndex])
            {
                Count.Cows++;
                break;
            }
        }
    }
    return Count;
}
