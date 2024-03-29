// Fill out your copyright notice in the Description page of Project Settings.

#include "Pac_ManGameModeBase.h"
#include "EngineUtils.h"
#include "Ghost_Actor.h"

void APac_ManGameModeBase::SendEffectToGhosts(ECollectibleTypeEnum Effect, float Duration)
{
	for (TActorIterator<AGhost_Actor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		ActorItr->Affect(Effect);
		GetWorld()->GetTimerManager().SetTimer(UnusedHandle, *ActorItr, &AGhost_Actor::ResetEffectsState, Duration);
	}
}