/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIModalViewDelegate.h"
#import "SBFlippyAlertItem.h"

@class MPAudioDeviceController;

@interface SBNowPlayingAlertItem : SBFlippyAlertItem <UIModalViewDelegate> {
	unsigned _beganSeeking : 1;
	unsigned _deferLayout : 1;
	unsigned _needsLayout : 1;
	MPAudioDeviceController* _audioDeviceController;
}
-(id)createCenteredLabel:(BOOL)label;
-(void)_updateLabelWithTag:(int)tag text:(id)text faded:(BOOL)faded cursor:(float*)cursor sheet:(id)sheet;
-(void)updateInformation;
-(id)_createButtonWithImage:(id)image action:(SEL)action tag:(int)tag;
-(void)audioRoutingPicker:(id)picker didSelectRouteAtIndex:(int)index;
-(void)_playPauseButtonAction:(id)action;
-(void)_changeTrackButtonDown:(id)down;
-(void)_changeTrackButtonUp:(id)up;
-(void)_changeTrackButtonTouchPause:(id)pause;
-(void)_volumeChange:(id)change;
-(void)_registerForNowPlayingNotifications;
-(void)_unregisterForNowPlayingNotifications;
-(void)_registerForVolumeNotifications;
-(void)_unregisterForVolumeNotifications;
-(void)_nowPlayingChanged:(id)changed;
-(void)_systemVolumeChanged:(id)changed;
-(void)audioDeviceControllerAudioRoutesChanged:(id)changed;
-(void)audioDeviceControllerMediaServerDied:(id)died;
@end
