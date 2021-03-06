#pragma once

#include "ID3D11Renderer.h"

#define EALLOC(type, amount) ( type *) malloc(sizeof( type ) * amount )

/**
* enum VertexBufferLayouts
*
* This enumeration defines a series of VB layouts.  If you want to
* add a new layout for VB's, you must add it here under the following
* naming scheme (I know it's bad but it will solve a lot of confusion
* if we just follow it)
*
* VertexFormatLayout_Name_B0__P0f3_TC0f2_N0f3
*
* Where:
* Name- The name of the Mesh or technique that utilizes this format
* B# - Buffer number (B0 = Buffer 0) since we can have multiple buffers for one shader
* P# - Position number (P0 = POSITION:0)
* C# - Can't remember why I put this here but I am leaving it
* TC# - Texture Coordinate number (TC0 = TEXCOORD:0)
* N# - Normal number (N0 = NORMAL:0)
* R# - Resolution number (R0 - RESOLUTION:0) This is intended to be an int2 since it defines the resolution
*
* f# - float number (f3 = float3 or three floats)
* i# - int number
* etc...
*
* Looking at the layout above, we know that we have a float3 in POSITION:0
* and so on and so forth.
* 
*/
enum VertexBufferLayouts {
	// Terrain VertexBufferLayouts
	VertexFormatLayout_CPUTerrain_B0_P0f3_TC0f2_N0f3 = 0,
	VertexFormatLayout_CPUTerrain_B0_P0f3_TC0f2_N0f3_B1_I0i3,
	VertexFormatLayout_GSTerrain_P0f3_TC0f2_N0f3_R0i2,
	VertexFormatLayout_Count
};


struct VertexBufferInputLayoutContainer {
	VertexBufferInputLayoutContainer() {

	
	}

	~VertexBufferInputLayoutContainer() {

	}

private:
	ID3D11InputLayout *m_inputLayoutInterfaces;
};