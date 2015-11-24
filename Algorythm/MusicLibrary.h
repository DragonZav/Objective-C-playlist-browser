//
//  MusicLibrary.h
//  Algorythm
//
//  Created by Chris Augg on 11/18/15.
//  Copyright © 2015 Auggie Doggie iOSware. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const kTitle;
extern NSString *const kDescription;
extern NSString *const kIcon;
extern NSString *const kLargeIcon;
extern NSString *const kBackgroundColor;
extern NSString *const kArtists;

@interface MusicLibrary : NSObject

@property (strong, nonatomic) NSArray *library;

@end
