#ifndef _TRANSFORM_MATRIX_
#define _TRANSFORM_MATRIX_
#include <Eigen/Dense>
#include "rbdl/rbdl.h"
Matrix4d T01f;
Matrix4d T12f;
Matrix4d T23f;
Matrix4d T34f;
Matrix4d T45f;
Matrix4d T56f;
Matrix4d T02f;
Matrix4d T24f;
Matrix4d T46f;
Matrix4d T06f;
Matrix3d R02f;
Matrix3d R46f;
Matrix3d R24f;
Matrix4d eye;
Matrix4d temp1;
Matrix4d temp2;
Matrix3d temp3;
Matrix4d A2;
Matrix4d A3;
Matrix4d D1;
Matrix4d D4;
Matrix4d D5;
Matrix4d D6;
Matrix4d forQ;
#endif