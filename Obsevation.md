The use of a switch statement in the checkout function works for now, but if when we add more payment modes in the future, this approach will get messy and hard to maintain. It doesn’t follow the Open/Closed Principle, since we have to keep editing the function every time we add a new mode.

All the payment processing logic is inside the checkout function. This makes it harder to test or extend later. we can prefer to break out each payment mode’s logic into its own function or even separate modules for better organization.

There’s a risk of code duplication here. Each case in the switch is basically doing the same thing—printing a message and leaving a placeholder. If the logic for each payment mode grows, It will end up repeating itself a lot.

The function doesn’t do any input validation for the amount. It just assumes the amount is always valid, but in a real system, we would want to check for things like negative or zero amounts.

The output messages are hardcoded and not set up for localization. If we ever need to support multiple languages or customize the messages, this will be a problem.

There’s no separation between the interface and the implementation. The way it’s written, it would be hard to swap out payment providers or refactor the code without touching the main logic.

The checkout function just prints to the console and doesn’t return any status or error code. That makes it tough to integrate with other parts of a bigger system or handle errors programmatically.
