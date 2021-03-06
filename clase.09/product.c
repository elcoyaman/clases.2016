#include "product.h"

int product_create(product_t* this) {
	this->code[0] = this->description[0] = '\0';
	return RES_OK;
}

void product_destroy(product_t* this) {
}

int product_clone(product_t* dst, const product_t* src) {
	strcpy(dst->code, src->code);
	strcpy(dst->description, src->description);
	return RES_OK;
}

void product_set_code(product_t* this, const char* code) {
	strcpy(this->code, code);
}

void product_get_code(product_t* this, char* code) {
	strcpy(code, this->code);
}

void product_set_description(product_t* this, const char* description) {
	strcpy(this->description, description);
}

void product_get_description(product_t* this, char* description) {
	strcpy(description, this->description);
}
