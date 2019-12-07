//
// Created by Gorgeous Bubble on 2019/12/7.
//

#ifndef TWILIGHT_DX9_COMMON_H
#define TWILIGHT_DX9_COMMON_H

// Windows platform
#include <Windows.h>

// C/C++
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <mmreg.h>
#include <wchar.h>
#include <tchar.h>
#include <time.h>
#include <mmsystem.h>

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <list>
#include <map>

// Assert
#include <assert.h>

// DirectX
#include <d3d9.h>
#include <d3dx9.h>
#include <d3dx9math.h>
#include <d3d11.h>
#include <d3dx11.h>
#include <dinput.h>
#include <dsound.h>
#include <dxerr.h>
#include <d3dcompiler.h>

// Statics Libraries
#pragma comment(lib,"d3d9.lib")
#pragma comment(lib,"d3dx9.lib")
#pragma comment(lib,"d3d11.lib")
#pragma comment(lib,"d3dx11.lib")
#pragma comment(lib,"dinput8.lib")
#pragma comment(lib,"dsound.lib")
#pragma comment(lib,"dxguid.lib")
#pragma comment(lib,"dxerr.lib")
#pragma comment(lib,"d3dcompiler.lib")
#pragma comment(lib,"WinMM.lib")

#ifndef UNICODE
#error "DirectX requires a Unicode build."
#endif

#define SAFE_RELEASE(Pointer)	{if(Pointer){(Pointer)->Release();(Pointer) = NULL;}}
#define SAFE_DELETE(Pointer)	{if(Pointer){delete(Pointer);(Pointer) = NULL;}}
#define SAFE_DELETE_ARRAY(Pointer) {if(Pointer){delete[](Pointer);(Pointer) = NULL;}}

#if defined (DEBUG) || defined (_DEBUG)
#ifndef CHECK
#define CHECK(x)	{HRESULT hr = (x); if(FAILED(hr)){DXTRACE_ERR_MSGBOX(L#x, hr);}}
#endif
#ifndef VERIFY
#define VERIFY(x)	{HRESULT hr = (x); if(FAILED(hr)){DXTRACE_ERR_MSGBOX(L#x, hr); return E_FAIL;}}
#endif
#else
#ifndef CHECK
#define CHECK(x)	{HRESULT hr = (x);}
#endif
#ifndef VERIFY
#define VERIFY(x)	{HRESULT hr = (x); if(FAILED(hr)){return E_FAIL;}}
#endif
#endif

#endif //TWILIGHT_DX9_COMMON_H
