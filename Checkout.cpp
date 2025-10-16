#include "Checkout.h"
#include "PaymentProcessors.h"

std::string checkout(PaymentMode mode, double amount) {
    if (mode == PaymentMode::PayPal) {
        return processPayPal(amount);
    } else if (mode == PaymentMode::GooglePay) {
        return processGooglePay(amount);
    } else if (mode == PaymentMode::CreditCard) {
        return processCreditCard(amount);
    } else {
        return processInvalid(amount);
    }
}
