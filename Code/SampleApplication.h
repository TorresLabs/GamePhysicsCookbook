#ifndef _H_SAMPLE_APPLICATION_
#define _H_SAMPLE_APPLICATION_

#include "GLWindow.h"
#include "vectors.h"

class SampleApplication : public GLWindow {
protected:
	vec3 cubeRotation;
	float cubeScale;
	float sphereScale;
	vec3 sphereRotation;
	vec2 cameraPos;
public:
	SampleApplication(const char* title, int width, int height) 
		: GLWindow(title, width, height) {
		m_nFixedFPS = 30.0f; 
		m_nTargetFPS = 60.0f;
	}
	virtual ~SampleApplication() { }

	virtual void OnRender();
	virtual void OnInitialize();
	virtual void OnUpdate(float deltaTime);
};

// Static instance defined in .cpp file!

#endif 
