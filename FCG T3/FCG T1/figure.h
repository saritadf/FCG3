//#define GLUI_FREEGLUT
#include <vector>
#include <stdio.h>
#include <string>
#include <cstring>
#include <cstdlib>
#include <map>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <iostream>

#include "./tools\GL\glew.h"
#include "tools/GL/freeglut.h"
//#pragma comment (lib,"lib/freeglut.lib")

#include "./tools\glfw-3.0.3\include\GLFW\glfw3.h"
#include "./tools/glfw-3.0.3/include/GLFW/glfw3native.h"
#include "tools/GL/glew.h"

#include "tools/AntTweakBar/AntTweakBar.h"
#include "tools/GL/glui.h"
#include "./tools/glm-0.9.4.0/glm/glm.hpp"
#include "./tools/glm-0.9.4.0/glm/gtc/matrix_transform.hpp"
#include "./tools/glm-0.9.4.0/glm/gtc/quaternion.hpp"
#include "./tools/glm-0.9.4.0/glm/gtx/quaternion.hpp"
#include "./tools/glm-0.9.4.0/glm/gtx/euler_angles.hpp"
#include "./tools/glm-0.9.4.0/glm/gtx/norm.hpp"
#include "./tools/glm-0.9.4.0/glm/gtc/type_ptr.hpp"

//grid object
#include "src/Grid.h"



#pragma comment (lib,"lib/AntTweakBar.lib")
#pragma comment (lib,"lib/glew32.lib")
#pragma comment (lib,"lib/glew32s.lib")
#pragma comment (lib,"lib/FreeImage.lib")

// defines paranoiers***************************************************//

#define FOURCC_DXT1 0x31545844 // Equivalent to "DXT1" in ASCII
#define FOURCC_DXT3 0x33545844 // Equivalent to "DXT3" in ASCII
#define FOURCC_DXT5 0x35545844 // Equivalent to "DXT5" in ASCII
using namespace std;
using namespace glm;

//**********************************************************************//
