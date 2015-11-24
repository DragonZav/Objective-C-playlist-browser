//
//  Playlist.h
//  Algorythm
//
//  Created by Chris Augg on 11/18/15.
//  Copyright © 2015 Auggie Doggie iOSware. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Playlist : NSObject

@property (strong, nonatomic) NSString *playlistTitle;
@property (strong, nonatomic) NSString *playlistDescription;
@property (strong, nonatomic) UIImage *playlistIcon;
@property (strong, nonatomic) UIImage *playlistLargeIcon;
@property (strong, nonatomic) NSArray *playlistArtists;
@property (strong, nonatomic) UIColor *backgroundColor;


- (instancetype)initWithIndex:(NSUInteger)index;

@end
