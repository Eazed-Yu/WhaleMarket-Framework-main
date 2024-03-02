// interface.h
#ifndef _INTERFACE_H_
#define _INTERFACE_H_
typedef void (*HANDLER)(void);
#include "tools/hint.h"
#include "menu/menu.h"
#include "user/user.h"
#include "good/good.h"
#include "order/order.h"

/* An interface gets user input with corresponding menu and handles it. */

/**
 * @brief 
 * | 1.User Login | 2.User Sign Up | 3.Admin Login | 4.Exit |
 */
void MAIN_Interface();

/**
 * @brief 
 * | 1.Goods | 2.Search | 3.Orders | 4.Users | 5.Delete | 6.Ban | 7.Back |
 */
void ADMIN_Interface();

/**
 * @brief 
 * | 1.Buyer | 2.Seller | 3.Information | 4.Back |
 */
void USER_Interface();

/**
 * @brief 
 * | 1.Goods | 2.Buy | 3.Search | 4.Order | 5.Infomation | 6.Back |
 */
void BUYER_Interface();

/**
 * @brief 
 * | 1.Sell | 2.Goods | 3.Modify | 4.Ban | 5.Order | 6.Back |
 */
void SELLER_Interface();

/**
 * @brief 
 * | 1.Information | 2.Modify | 3.Top Up | 4.Back |
 */
void INFO_Interface();

/**
 * @brief 
 * | 1.Password | 2.Contact | 3.Address | 4.Back |
 */
void MODIFY_Interface();

/**
 * @brief 
 * | 1.Name | 2.Price | 3.Description | 4.Back |
 */
void GOOD_Interface();


#endif