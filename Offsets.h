#pragma once

#include "Includes.h"

namespace Offsets
{   
	unsigned int UE4 = ReadMemoryEx<uint32>(0x0e0c36f4 - 0xc);
	DWORD uWorlds = rpm->read<DWORD>(rpm->read<DWORD>(offsets::UE4 + offsets::Gworld) + 0x3c);
	DWORD gname = rpm->read<DWORD>(rpm->read<DWORD>(offsets::UE4 + offsets::Gname) + 0x80);
	DWORD Gname = 0x75EFD9C;
	DWORD Gworld = 0x78efcb4;
	DWORD PersistentLevel = 0x20;
	DWORD NetDriver = 0x24;
	DWORD ServerConnection = 0x60;
	DWORD PlayerController = 0x20;
	DWORD AcknowledgedPawn = 0x350;
	DWORD PlayerCameraManager = 0x360;
	DWORD CameraCache = 0x370;
	DWORD Mesh = 0x340;
	DWORD CachedComponentSpaceTransforms = 0x754;
	DWORD RootComponent = 0x16c;
	DWORD CurrWeapon = 0x19ac;
	DWORD RelativeLocation = 0x150;
	DWORD bDead = 0x998;
	DWORD Nation = 0x674;
	DWORD PlayerName = 0x668;
	DWORD TeamID = 0x690;
	DWORD CurrentStates = 0xab0;
	DWORD Health = 0x95c;
	DWORD HealthMax = 0x960;
	DWORD bIsAI = 0x708;
	DWORD ReplicatedMovement = 0x80;
	DWORD bIsWeaponFiring = 0xf20;
	DWORD bIsGunADS = 0xb35;
	DWORD VehicleCommon = 0x6dc;
	DWORD HP = 0x1a8;
	DWORD HPMax = 0x1a4;
	DWORD FuelMax = 0x1bc;
	DWORD Fuel = 0x1c0;
	DWORD PoseState = 0xf30;
	DWORD ScopeFov = 0x127c;
	DWORD bVisibleCheck = 0xf10;
	DWORD PickUpDataList = 0x684;
	DWORD CurBulletNumInClip = 0xa60;
	DWORD CurMaxBulletNumInOneClip = 0xa74;
	DWORD NearDeathBreath = 0x11a4;
	DWORD RelativeRotation = 0x124;
	DWORD ComponentVelocity = 0x1a0;
	DWORD BulletFireSpeed = 0x404;
	DWORD ShootWeaponEntity = 0xb70;
	DWORD AccessoriesVRecoilFactor = 0x848;
	DWORD AccessoriesHRecoilFactor = 0x84c;
	DWORD AccessoriesRecoveryFactor = 0x850;
}
