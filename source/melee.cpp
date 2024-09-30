// ParticleEmitter.cpp
#include "melee.h"
#include "renderer.h"
#include "sprite.h"
#include "imgui.h"

Melee::Melee()
    : m_pSelfSprite(nullptr)
    , m_fX(0.0f)
    , m_fY(0.0f)
{
}

Melee::~Melee()
{
}

bool Melee::Initialise(Renderer& renderer)
{
}

void Melee::Process(float deltaTime)
{
}

void Melee::Draw(Renderer& renderer)
{

}

void Melee::DebugDraw()
{
    ImGui::Text("Melee Weapon Settings");

}

void Melee::SetXY(float x, float y) {
    m_fX = x;
    m_fY = y;
}