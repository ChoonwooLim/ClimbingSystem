// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CustomMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef CLIMBINGSYSTEM_CustomMovementComponent_generated_h
#error "CustomMovementComponent.generated.h already included, missing '#pragma once' in CustomMovementComponent.h"
#endif
#define CLIMBINGSYSTEM_CustomMovementComponent_generated_h

#define FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_SPARSE_DATA
#define FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnClimbMontageEnded);


#define FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_ACCESSORS
#define FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomMovementComponent(); \
	friend struct Z_Construct_UClass_UCustomMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClimbingSystem"), NO_API) \
	DECLARE_SERIALIZER(UCustomMovementComponent)


#define FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomMovementComponent(UCustomMovementComponent&&); \
	NO_API UCustomMovementComponent(const UCustomMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomMovementComponent) \
	NO_API virtual ~UCustomMovementComponent();


#define FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_27_PROLOG
#define FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_SPARSE_DATA \
	FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_ACCESSORS \
	FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIMBINGSYSTEM_API UClass* StaticClass<class UCustomMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h


#define FOREACH_ENUM_ECUSTOMMOVEMENTMODE(op) \
	op(ECustomMovementMode::MOVE_Climb) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
