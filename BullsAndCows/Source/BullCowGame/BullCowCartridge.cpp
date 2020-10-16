// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to Bulls And Cows!!!"));
    PrintLine(TEXT("Guess the 4 Letter Word"));
    PrintLine(TEXT("Press enter to continue"));
}

void UBullCowCartridge::OnInput(const FString & Input) // When the player hits enter
{
    ClearScreen();
    HiddenWord = "Cake";
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You Won"));
    }
    else
    {
        PrintLine("You Lost");
    }
}