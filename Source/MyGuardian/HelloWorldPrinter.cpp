
#include "MyGuardian.h"
#include "HelloWorldPrinter.h"


AHelloWorldPrinter::AHelloWorldPrinter(const class FPostConstructInitializeProperties& PCIP)
: Super(PCIP)
{
	MyNumber = 12;
}

void AHelloWorldPrinter::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Hello World!"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::FromInt(MyNumber));
	}
}

