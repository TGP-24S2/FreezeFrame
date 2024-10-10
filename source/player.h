#ifndef __PLAYER_H__
#define __PLAYER_H__

// Local includes:
#include "vector2.h"
#include "entity.h"

// Forward declarations:
class Renderer;
class InputSystem;

class Player : public Entity
{
	// Member methods:
public:
	Player();
	~Player();

	bool Initialise(Renderer& renderer);
	void Process(float deltaTime, InputSystem& inputSystem);
	void Draw(Renderer& renderer);

	void CapSpeed();

	float GetX();
	float GetY();

	void SetAimAngle(float angle);
	void SetWeaponType(int weaponType);
protected:

private:


	// Member data:

public:

protected:

private:
	float m_fAccelerationRate = 1.0f;
	float m_fDecelerationRate = 0.3f;
	float m_fSpeedScale = 1.0f;
	float m_fMaxSpeed = 1000.0f;
	float m_fWallBounceDecay = 0.8f;
	float m_fInitialScale = 0.3f;
	float m_fAngle = 0.0f;

	int m_iWeaponType;
};

#endif // __PLAYER_H__