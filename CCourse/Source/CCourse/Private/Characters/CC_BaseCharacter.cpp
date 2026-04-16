// Fill out your copyright notice in the Description page of Project Settings.


#include "CCourse/Public/Characters/CC_BaseCharacter.h"


// Sets default values
ACC_BaseCharacter::ACC_BaseCharacter()
{

	PrimaryActorTick.bCanEverTick = false;
	
	//Tick and refresh bone transforms on a dedicated server - whether they are rendered or not 
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
}





