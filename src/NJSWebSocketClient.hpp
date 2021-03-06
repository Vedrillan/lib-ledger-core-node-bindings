// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from websocket_client.djinni

#ifndef DJINNI_GENERATED_NJSWEBSOCKETCLIENT_HPP
#define DJINNI_GENERATED_NJSWEBSOCKETCLIENT_HPP


#include "../include/WebSocketConnection.hpp"
#include "NJSWebSocketConnectionCpp.hpp"
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../include/WebSocketClient.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSWebSocketClient: public ledger::core::api::WebSocketClient {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::WebSocketClient> &object);
    static Nan::Persistent<ObjectTemplate> WebSocketClient_prototype;
    ~NJSWebSocketClient()
    {
        njs_impl.Reset();
    };
    NJSWebSocketClient(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    void connect(const std::string & url, const std::shared_ptr<WebSocketConnection> & connection);

    void send(const std::shared_ptr<WebSocketConnection> & connection, const std::string & data);

    void disconnect(const std::shared_ptr<WebSocketConnection> & connection);

private:
    static NAN_METHOD(connect);

    static NAN_METHOD(send);

    static NAN_METHOD(disconnect);

    static NAN_METHOD(New);

    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSWEBSOCKETCLIENT_HPP
