/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSXMLParser, RUIObjectModel, NSMutableArray, NSURL;

@interface RUIParser : NSObject <NSXMLParserDelegate> {
    NSXMLParser *_parser;
    RUIObjectModel *_uiObjectModel;
    NSMutableArray *_pages;
    int _actionSignal;
    int _parserState;
    NSURL *_baseURL;
}

@property(retain) NSURL * baseURL;


- (void)setBaseURL:(id)arg1;
- (void)dealloc;
- (id)_lastRow;
- (void)_newRowWithAttributeDict:(id)arg1;
- (id)_lastPageCreateIfNeeded;
- (id)_createNewPage;
- (id)initWithXML:(id)arg1;
- (int)actionSignal;
- (id)uiObjectModel;
- (id)initWithXML:(id)arg1 baseURL:(id)arg2;
- (id)baseURL;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;

@end
