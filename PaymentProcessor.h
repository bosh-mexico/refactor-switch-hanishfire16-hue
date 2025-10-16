#pragma once
#include <string>
#include "PaymentMode.h"

// Each processor returns a status message for testability
std::string processPayPal(double amount);
std::string processGooglePay(double amount);
std::string processCreditCard(double amount);
std::string processInvalid(double amount);
