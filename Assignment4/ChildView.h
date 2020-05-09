
// ChildView.h : interface of the CChildView class
//


#pragma once
#include "ShaderWnd/ShaderWnd.h"
#include "Mesh.h"
#include "Sphere.h"
#include "graphics\GrTexture.h"
#include "graphics\GrCubeTexture.h"
#include "Torus.h"

// CChildView window

class CChildView : public CShaderWnd
{
	// Construction
public:
	CChildView();

	// Attributes
public:
	CGrTexture m_bunnyTex;
	CGrTexture m_sphereTex;
	CGrCubeTexture m_cubeTex;
	CMesh m_bunny;
	CSphere m_sphere;
	CSphere m_metallicSphere;
	CMesh m_skybox;
	
	// Task 1
	CMesh m_fish;
	CGrTexture m_fishTex;

	// Task 2
	CTorus m_tori;
	CGrTexture m_toriTex;

	// Operations
public:
	virtual void RenderGL();
	virtual void InitGL();
	virtual void CleanGL();

	// Overrides
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

	// Implementation
public:
	virtual ~CChildView();

	// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

