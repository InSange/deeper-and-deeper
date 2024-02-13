// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class UNREAL_TEST_API TestClass
{
public:
	TestClass();
	~TestClass();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	APawn pawn;
};
