#pragma once
#ifndef __SCENEFFGAME_H__
#define __SCENEFFGAME_H__

// Local includes: 
#include "scene.h"
#include "vector2.h"
#include "vector"

#include <fmod.hpp>

// Forward declarations:
class Sprite;
class Ball;
class Enemy;
class Player;
class Rectangle;
class SoundSystem;
class ParticleEmitter;

class SceneFFGame : public Scene
{
	// Member methods:
public:
	SceneFFGame();
	 ~SceneFFGame();

	 bool Initialise(Renderer& renderer, SoundSystem* soundSystem);
	 void Process(float deltaTime, InputSystem& inputSystem);
	 void Draw(Renderer& renderer);
	 void WipeScene();
	 void DebugDraw();
protected:

private:

	// Member data:
public:
	// game
	float m_fLocalDeltaTime;
	float m_fTimeSinceInput;
	float m_fPostMovementTimeBuffer = 0.7f; //how long game processes after controls are released

	// player
	Player* m_pPlayer;

	// enemies
	Enemy** m_lpEnemies;
	int m_iNumEnemies;

	// text sprites
	Sprite* m_pGameOverSprite;
	Sprite* m_pYouWinSprite;

	// cursor
	Sprite* m_pCursorSprite;
	Vector2 m_cursorPosition;

	//TESTING remove later probs
	Ball* m_pTestBall;
	std::vector<ParticleEmitter*> weapons;
	int m_iCurrentWeapon;

	Rectangle* m_pRectangle;


protected:

private:
	Renderer* m_pRenderer;
	SoundSystem* m_pSoundSystem;
};

#endif // __SCENEFFGAME_H__