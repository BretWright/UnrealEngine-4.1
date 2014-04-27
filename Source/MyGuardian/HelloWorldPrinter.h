

#pragma once

#include "GameFramework/Actor.h"
#include "HelloWorldPrinter.generated.h"

/**
 * 
 */
UCLASS()
class AHelloWorldPrinter : public AActor
{
	GENERATED_UCLASS_BODY()

	UPROPERTY()
	int32 MyNumber;

	virtual void BeginPlay() OVERRIDE;

};
