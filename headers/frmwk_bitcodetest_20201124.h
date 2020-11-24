//
//  frmwk_bitcodetest_20201124.h
//  frmwk_bitcodetest_20201124
//
// Defines objc api for frmwk_bitcodetest_20201124 implementation in RoboVM
//

#import <Foundation/Foundation.h>

//
// Calculator class
//
@interface Calculator
-(id)init;
-(id)initWithValue:(int)startValue;
-(int)reset;
-(int)add:(int) i;
-(int)sub:(int) i;
-(int)result;
@end

//
// frmwk_bitcodetest_20201124Demo class with basic API demonstration
//
@interface frmwk_bitcodetest_20201124Demo
-(id)init;
-(id)initWithText:(NSString*)text;
+(void)hello;
-(NSString*)roboVmVersion;
-(void)installSignals:(void(^)(void))installer;
@end
