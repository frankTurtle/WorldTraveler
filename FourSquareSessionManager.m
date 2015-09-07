//
//  FourSquareSessionManager.m
//  World Traveler
//
//  Created by OSX on 9/7/15.
//  Copyright (c) 2015 LebonTech Solutions. All rights reserved.
//

#import "FourSquareSessionManager.h"
#define FOUR_SQURE_BASE_URL_STRING @"https://api.foursquare.com/v2/"

@implementation FourSquareSessionManager

// Creates a singleton
+(instancetype)sharedClient
{
    static FourSquareSessionManager *_sharedClient = nil;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedClient = [[FourSquareSessionManager alloc] initWithBaseURL:[NSURL URLWithString:FOUR_SQURE_BASE_URL_STRING]];
    });
    
    return _sharedClient;
}

@end
