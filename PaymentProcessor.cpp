#include "PaymentProcessors.h"
#include <sstream>

std::string processPayPal(double amount) {
    std::ostringstream oss;
    if (amount <= 0) {
        oss << "Invalid amount for PayPal payment!";
    } else {
        oss << "Processing PayPal payment of $" << amount;
        // Placeholder: Integrate PayPal API here
    }
    return oss.str();
}

std::string processGooglePay(double amount) {
    std::ostringstream oss;
    if (amount <= 0) {
        oss << "Invalid amount for GooglePay payment!";
    } else {
        oss << "Processing GooglePay payment of $" << amount;
        // Placeholder: Integrate GooglePay API here
    }
    return oss.str();
}

std::string processCreditCard(double amount) {
    std::ostringstream oss;
    if (amount <= 0) {
        oss << "Invalid amount for Credit Card payment!";
    } else {
        oss << "Processing Credit Card payment of $" << amount;
        // Placeholder: Integrate Credit Card API here
    }
    return oss.str();
}

std::string processInvalid(double /*amount*/) {
    return "Invalid payment mode selected!";
}
