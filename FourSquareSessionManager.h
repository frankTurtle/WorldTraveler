//
//  FourSquareSessionManager.h
//  World Traveler
//
//  Created by OSX on 9/7/15.
//  Copyright (c) 2015 LebonTech Solutions. All rights reserved.
//

#import "AFHTTPSessionManager.h"

@interface FourSquareSessionManager : AFHTTPSessionManager

+(instancetype)sharedClient; //.............................. singleton

@end
