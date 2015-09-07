//
//  FSCategory.h
//  World Traveler
//
//  Created by OSX on 9/7/15.
//  Copyright (c) 2015 LebonTech Solutions. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Venue;

@interface FSCategory : NSManagedObject

@property (nonatomic, retain) NSString * id;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) Venue *venue;

@end
