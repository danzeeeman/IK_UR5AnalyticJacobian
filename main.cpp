#include <iostream>
#include <string>
#include <conio.h>
#include "Robot_model.h"

using namespace std;
Robot_model robot_;

int main()
{
	robot_.updateTransformMatrix();
	bool flag = true;
	VectorXd qd(6); //set the size by 6
	qd.setZero();
	VectorXd qdot(6);
	qdot.setZero();
	qd(0) = M_PI / 6.0;
	qd(1) = M_PI / 6.0;
	qd(2) = M_PI / 6.0;
	qd(3) = M_PI / 2.0;
	qd(4) = M_PI / 6.0;
	qd(5) = M_PI / 6.0;
	//qd.setZero();
	cout << "qd 각도 출력" << endl;
	cout << qd << endl << endl;
	cout << qd * 180 / M_PI << endl;
	cout << "Press the Key" << endl;
	while (flag)
	{
		robot_.UpdateState(qd, qdot);
		robot_.updateRobotmodel();
		if (_kbhit())
		{
			int key = _getch();
			switch (key)
			{
			case 'a':
				cout << "JacobianBasedSolver" << endl;
				cout << "pos" << endl << robot_.getPosition() << endl<<endl;
				cout << "ori" << endl << robot_.getOrientation() << endl<<endl;
				robot_.JacobianBasedSolver(robot_.getPosition(), robot_.getOrientation());
				break;
			case 's':
				cout << "Analytic IK" << endl;
				robot_.analyticIKSolver(robot_.getPosition(), robot_.getOrientation());
				break;
			case 'q':
				cout << "finished" << endl;
				flag = false;
				break;
			default:
				break;
			}
		}

	}
	return 0;
}