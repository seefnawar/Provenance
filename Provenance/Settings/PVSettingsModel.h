//
//  PVSettingsModel.h
//  Provenance
//
//  Created by James Addyman on 21/08/2013.
//  Copyright (c) 2013 James Addyman. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const kAutoSaveKey;
extern NSString * const kAskToAutoLoadKey;
extern NSString * const kAutoLoadAutoSavesKey;
extern NSString * const kControllerOpacityKey;
extern NSString * const kDisableAutoLockKey;
extern NSString * const kButtonVibrationKey;

@interface PVSettingsModel : NSObject

@property (nonatomic, assign) BOOL autoSave;
@property (nonatomic, assign) BOOL askToAutoLoad;
@property (nonatomic, assign) BOOL autoLoadAutoSaves;
@property (nonatomic, assign) BOOL disableAutoLock;
@property (nonatomic, assign) BOOL buttonVibration;

@property (nonatomic, assign) CGFloat controllerOpacity;

+ (PVSettingsModel *)sharedInstance;

@end
