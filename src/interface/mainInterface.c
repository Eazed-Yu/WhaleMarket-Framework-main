// mainInterface.c
#include "interface/interface.h"
#include "tools/hint.h"
#include "menu/menu.h"

static void USER_Login() { ... }
static void USER_SignUp() { ... }
static void ADMIN_Login() { ... }

void MAIN_Interface() {
    successMessage(); // 成功进入主菜单
    int op = menu(MAIN); // 使用菜单获取用户输入
    while (op != optionNum[MAIN]) {
    // 如果用户不选择退出（默认都是最后一个选项是退出）
        loadingMessage();
        if (op == 1) {
            USER_Login(); // 用户登陆
        }
        else if (op == 2) {
            USER_SignUp(); // 用户注册
        }
        else if (op == 3) {
            ADMIN_Login(); // 管理员登陆
        }
        op = menu(MAIN); 
    } 
    loadingMessage(); 
    successMessage();
}