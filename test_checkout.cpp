#include <cassert>
#include <string>
#include "Checkout.h"
#include "PaymentMode.h"

int main() {
    // Test valid payments
    assert(checkout(PaymentMode::PayPal, 100.0) == "Processing PayPal payment of $100");
    assert(checkout(PaymentMode::GooglePay, 50.5) == "Processing GooglePay payment of $50.5");
    assert(checkout(PaymentMode::CreditCard, 200) == "Processing Credit Card payment of $200");

    // Test invalid payment mode
    assert(checkout(PaymentMode::Unknown, 100) == "Invalid payment mode selected!");

    // Test invalid amounts
    assert(checkout(PaymentMode::PayPal, 0) == "Invalid amount for PayPal payment!");
    assert(checkout(PaymentMode::GooglePay, -5) == "Invalid amount for GooglePay payment!");
    assert(checkout(PaymentMode::CreditCard, -1) == "Invalid amount for Credit Card payment!");

    return 0;
}
