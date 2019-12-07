//
// Created by Gorgeous Bubble on 2019/12/7.
//

#ifndef TWILIGHT_DX9_GRAPHICS_H
#define TWILIGHT_DX9_GRAPHICS_H

#include <d3d9.h>
#include "dx9_graphics.h"

class dx9_graphics {
private:
    IDirect3D9* m_pD3D9;
    IDirect3DDevice9* m_pD3D9Device;
    D3DCAPS9 m_D3D9Caps;
    D3DPRESENT_PARAMETERS m_D3D9pp;

};

#endif //TWILIGHT_DX9_GRAPHICS_H
