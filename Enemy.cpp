#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::enemy[])() = {
	&Enemy::Move,
	&Enemy::Fire,
	&Enemy::Secession
};;;
void Enemy::Move() {
	printf("GoMove\n");
	phase_ = Phase::Fire;
}

void Enemy::Fire() {
	printf("Fire\n");
	phase_ = Phase::Secession;
}

void Enemy::Secession() {
	printf("secession\n");
	phase_ = Phase::Move;
}

void Enemy::Update() {
	(this->*enemy[static_cast<size_t>(phase_)])();
}