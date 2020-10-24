// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame();

    PrintLine(FString :: Printf(TEXT("The Hiddenword is: %s"), HiddenWord));

    //Welcomes Player
    PrintLine(TEXT("Welcome to Bulls And Cows!!!"));
    PrintLine(TEXT("Guess the 4 Letter Word"));
    PrintLine(TEXT("Press enter to continue"));
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    ClearScreen();

    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You Won"));
    }
    else
    {
        if (Input.Len() != HiddenWord.Len())
        {
            PrintLine(TEXT("The Hidden Word is 4 Characters Long"));
            PrintLine("You Lost");
        }
        else
        {
            PrintLine(TEXT("TooClose"));
        }
    }
}

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("Cake");
    Lives = 4;
}