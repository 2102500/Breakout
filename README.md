# Breakout

W Kavanagh. June Summer 2024

## controls

A/D to move the paddle right and left.
P to pause.

## Powerups

big/small paddle (blue)
fast/slow ball (fancy yellow)
fire ball (green)

# Tasklist

## Suggested fixes

* Fix the compiler issues in the code

## Suggested tasks

* Implement mouse input for pad
* Improved VFX (ball trail, paddle hit response, brick particle destruction)
* Better UI (progress bar rather than timer for countdown).
* GameLoop
* Better ball physics (Box2D)
* Leaderboards
* More ball types (e.g., multiball, sticky ball [where you shoot the ball from the paddle every time], tiny ball, big ball, brick-tracking ball)
* Sounds with increasing tone between bounces.
* Implement commentary with calls to an LLM such as LLama

# Time Details and Changelist
22/10/24 12:27 - Start Code Test
22/10/24 12:31 - Fixed game breaking bug where child class was called inside parent class
22/10/24 12:42 - Deleted duplicated code in GameManager.cpp where paddle input was checked twice
22/10/24 13:02 - added new 'extra ball' powerup header and cpp file, updated powerup manager and CONSTANTS.h
22/10/24 13:15 - amended UI text and switch in powerup manager to include new powerup
22/10/24 13:42 - attempting to spawn new ball, added new function to ball class to spawn another ball, called function within powerup class
22/10/24 14:22 - continuing work on extra ball, currently crashing on collision with powerup
22/10/24 14:51 - re-worked extra ball feature from powerup feature to difficulty feature, new ball spawned in on key press, currently 'M'
22/10/24 15:01 - removed deprecated 'spawn ball' function, tweaked paddle speed when extra ball is spawned in
22/10/24 15:31 - added screen shake upon losing life