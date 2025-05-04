// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef LP3_4_InteractableInterface_generated_h
#error "InteractableInterface.generated.h already included, missing '#pragma once' in InteractableInterface.h"
#endif
#define LP3_4_InteractableInterface_generated_h

#define FID_LLLP3_Adriana_LP3_4_LP3_4_Source_LP3_4_InteractableInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(AActor* Interactor) {}; \
	DECLARE_FUNCTION(execInteract);


#define FID_LLLP3_Adriana_LP3_4_LP3_4_Source_LP3_4_InteractableInterface_h_10_CALLBACK_WRAPPERS
#define FID_LLLP3_Adriana_LP3_4_LP3_4_Source_LP3_4_InteractableInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LP3_4_API UInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractableInterface(UInteractableInterface&&); \
	UInteractableInterface(const UInteractableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LP3_4_API, UInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableInterface) \
	LP3_4_API virtual ~UInteractableInterface();


#define FID_LLLP3_Adriana_LP3_4_LP3_4_Source_LP3_4_InteractableInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractableInterface(); \
	friend struct Z_Construct_UClass_UInteractableInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LP3_4"), LP3_4_API) \
	DECLARE_SERIALIZER(UInteractableInterface)


#define FID_LLLP3_Adriana_LP3_4_LP3_4_Source_LP3_4_InteractableInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_LLLP3_Adriana_LP3_4_LP3_4_Source_LP3_4_InteractableInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_LLLP3_Adriana_LP3_4_LP3_4_Source_LP3_4_InteractableInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LLLP3_Adriana_LP3_4_LP3_4_Source_LP3_4_InteractableInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractableInterface() {} \
public: \
	typedef UInteractableInterface UClassType; \
	typedef IInteractableInterface ThisClass; \
	static void Execute_Interact(UObject* O, AActor* Interactor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_LLLP3_Adriana_LP3_4_LP3_4_Source_LP3_4_InteractableInterface_h_7_PROLOG
#define FID_LLLP3_Adriana_LP3_4_LP3_4_Source_LP3_4_InteractableInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LLLP3_Adriana_LP3_4_LP3_4_Source_LP3_4_InteractableInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LLLP3_Adriana_LP3_4_LP3_4_Source_LP3_4_InteractableInterface_h_10_CALLBACK_WRAPPERS \
	FID_LLLP3_Adriana_LP3_4_LP3_4_Source_LP3_4_InteractableInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LP3_4_API UClass* StaticClass<class UInteractableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LLLP3_Adriana_LP3_4_LP3_4_Source_LP3_4_InteractableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
