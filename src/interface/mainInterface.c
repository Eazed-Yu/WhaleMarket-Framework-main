// mainInterface.c
#include "interface/interface.h"
#include "tools/hint.h"
#include "menu/menu.h"

static HANDLER handler[] = {USER_Login, USER_SignUp, ADMIN_Login};

static void USER_Login() {
    
}
static void USER_SignUp() {
    
}
static void ADMIN_Login() {
    
}



void MAIN_Interface() {
    successMessage();
    int op = menu(MAIN);
    while (op != optionNum[MAIN]) {
        loadingMessage();
        handler[op - 1]();
        op = menu(MAIN); 
    }
    loadingMessage();
    successMessage();
}