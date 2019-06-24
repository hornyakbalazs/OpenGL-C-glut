#ifndef INCLUDE_CALLBACKS_H_
#define INCLUDE_CALLBACKS_H_

#include "camera.h"
#include "move.h"

#include <GL/glut.h>

int mouse_x, mouse_y;

struct Camera camera;

extern int WINDOW_WIDTH;
extern int WINDOW_HEIGHT;

struct Action
{
	int move_forward;
	int move_backward;
	int step_left;
	int step_right;
	int move_up;
	int move_down;
	int increase_light;
	int decrease_light;
	int move_dino1;
	int move_dino2;
};
struct Action action;

void set_callbacks();

void display();

void reshape(GLsizei width, GLsizei height);

void keyboard(unsigned char key, int x, int y);

void keyboardUp(unsigned char key, int x, int y);

void specialFunc(int key, int x, int y);

void mouse(int button, int state, int x, int y);

void motion(int x, int y);

void idle();

double calc_elapsed_time();

void update_camera_position(struct Camera* camera, double elapsed_time);

void move_dino1(World* world,double elapsed_time);

void move_dino2(World* world,double elapsed_time);

#endif /* INCLUDE_CALLBACKS_H_ */
