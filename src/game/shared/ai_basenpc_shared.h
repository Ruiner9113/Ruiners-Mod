//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================//

#ifndef AI_BASENPC_SHARED_H
#define AI_BASENPC_SHARED_H

#ifdef CLIENT_DLL
#include "c_ai_basenpc.h"
#else
#include "ai_basenpc.h"
#endif

#ifdef CLIENT_DLL
#define CAI_BaseNPC C_AI_BaseNPC
#endif

#endif // AI_BASENPC_SHARED_H
