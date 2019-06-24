#include <math.h>
#include "model.h"
#include "callbacks.h"
#include "move.h"

int jumpLimit = 40;
int up = 1;
int up2 = 1;
double vel=6;
double vel2=6;

void move_dino1(World* world,double elapsed_time) {
	if (up==3) 
		up=1;	
	if (up == 1) {
		world->dino1.position.y+=vel;
		vel=vel-0.5;
		}
	if (world->dino1.position.y>=jumpLimit){
		up=0; 
		world->dino1.position.y=jumpLimit;
		}
	if (up == 0) 
		world->dino1.position.y+=vel;
	if (world->dino1.position.y == 0){
		up=3;
		vel=6;world->dino1.position.y = 0;
		action.move_dino1=FALSE;	
		}		
}

void move_dino2(World* world,double elapsed_time) {
	if (up2==3) 
		up2=1;	
	if (up2 == 1) {
		world->dino2.position.y+=vel2;
		vel2=vel2-0.5;
		}
	if (world->dino2.position.y>=jumpLimit){
		up2=0; 
		world->dino2.position.y=jumpLimit;
		}
	if (up2 == 0)
		world->dino2.position.y+=vel2;
	if (world->dino2.position.y == 0){
		up2=3;
		vel2=6;world->dino2.position.y = 0; 
		action.move_dino2=FALSE;	
	}
	
}

