//
//  Location.h
//  World Traveler
//
//  Created by OSX on 9/7/15.
//  Copyright (c) 2015 LebonTech Solutions. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Venue;

@interface Location : NSManagedObject

@property (nonatomic, retain) NSString * address;
@property (nonatomic, retain) NSString * cc;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * country;
@property (nonatomic, retain) NSString * crossStreet;
@property (nonatomic, retain) NSNumber * lng;
@property (nonatomic, retain) NSNumber * lat;
@property (nonatomic, retain) NSString * postalCode;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) Venue *venue;

@end
