// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TERRATOPIATEST_TerratopiaTestProjectile_generated_h
#error "TerratopiaTestProjectile.generated.h already included, missing '#pragma once' in TerratopiaTestProjectile.h"
#endif
#define TERRATOPIATEST_TerratopiaTestProjectile_generated_h

#define TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_SPARSE_DATA
#define TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATerratopiaTestProjectile(); \
	friend struct Z_Construct_UClass_ATerratopiaTestProjectile_Statics; \
public: \
	DECLARE_CLASS(ATerratopiaTestProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TerratopiaTest"), NO_API) \
	DECLARE_SERIALIZER(ATerratopiaTestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATerratopiaTestProjectile(); \
	friend struct Z_Construct_UClass_ATerratopiaTestProjectile_Statics; \
public: \
	DECLARE_CLASS(ATerratopiaTestProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TerratopiaTest"), NO_API) \
	DECLARE_SERIALIZER(ATerratopiaTestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATerratopiaTestProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATerratopiaTestProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATerratopiaTestProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATerratopiaTestProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATerratopiaTestProjectile(ATerratopiaTestProjectile&&); \
	NO_API ATerratopiaTestProjectile(const ATerratopiaTestProjectile&); \
public:


#define TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATerratopiaTestProjectile(ATerratopiaTestProjectile&&); \
	NO_API ATerratopiaTestProjectile(const ATerratopiaTestProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATerratopiaTestProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATerratopiaTestProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATerratopiaTestProjectile)


#define TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATerratopiaTestProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATerratopiaTestProjectile, ProjectileMovement); }


#define TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_12_PROLOG
#define TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_SPARSE_DATA \
	TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_RPC_WRAPPERS \
	TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_INCLASS \
	TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_SPARSE_DATA \
	TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_INCLASS_NO_PURE_DECLS \
	TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TERRATOPIATEST_API UClass* StaticClass<class ATerratopiaTestProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TerratopiaTest_Source_TerratopiaTest_TerratopiaTestProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
