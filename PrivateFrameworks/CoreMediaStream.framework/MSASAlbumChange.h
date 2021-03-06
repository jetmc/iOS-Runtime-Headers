/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MSASInvitation, NSString;

@interface MSASAlbumChange : NSObject  {
    NSString *_GUID;
    NSString *_ownerEmail;
    NSString *_ownerFullName;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    NSString *_URLString;
    MSASInvitation *_invitation;
    NSString *_name;
    BOOL _wasDeleted;
}

@property(copy) NSString * ownerEmail;
@property(copy) NSString * ownerFullName;
@property(copy) NSString * ownerFirstName;
@property(copy) NSString * ownerLastName;
@property(retain) NSString * GUID;
@property(retain) NSString * URLString;
@property(retain) NSString * name;
@property BOOL wasDeleted;
@property(retain) MSASInvitation * invitation;


- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (void).cxx_destruct;
- (void)setURLString:(id)arg1;
- (id)URLString;
- (void)setOwnerLastName:(id)arg1;
- (void)setOwnerFirstName:(id)arg1;
- (void)setOwnerFullName:(id)arg1;
- (void)setOwnerEmail:(id)arg1;
- (void)setInvitation:(id)arg1;
- (id)invitation;
- (void)setWasDeleted:(BOOL)arg1;
- (BOOL)wasDeleted;
- (void)setGUID:(id)arg1;
- (id)ownerFullName;
- (id)ownerLastName;
- (id)ownerFirstName;
- (id)ownerEmail;
- (id)GUID;

@end
