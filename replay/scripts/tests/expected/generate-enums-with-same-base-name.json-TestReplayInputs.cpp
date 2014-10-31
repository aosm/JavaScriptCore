/*
 * Copyright (C) 2014 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// DO NOT EDIT THIS FILE. It is automatically generated from generate-enums-with-same-base-name.json
// by the script: JavaScriptCore/replay/scripts/CodeGeneratorReplayInputs.py

#include "config.h"
#include "generate-enums-with-same-base-name.json-TestReplayInputs.h"

#if ENABLE(WEB_REPLAY)
#include "InternalNamespaceImplIncludeDummy.h"
#include <platform/ExternalNamespaceImplIncludeDummy.h>

namespace Test {
FormCombo::FormCombo(PlatformEvent::Type eventType, FormData::Type formType)
    : NondeterministicInput<FormCombo>()
    , m_eventType(eventType)
    , m_formType(formType)
{
}

FormCombo::~FormCombo()
{
}
} // namespace Test

namespace JSC {
const AtomicString& InputTraits<Test::FormCombo>::type()
{
    static NeverDestroyed<const AtomicString> type("FormCombo", AtomicString::ConstructFromLiteral);
    return type;
}

void InputTraits<Test::FormCombo>::encode(EncodedValue& encodedValue, const Test::FormCombo& input)
{
    encodedValue.put<PlatformEvent::Type>(ASCIILiteral("eventType"), input.eventType());
    encodedValue.put<WebCore::FormData::Type>(ASCIILiteral("formType"), input.formType());
}

bool InputTraits<Test::FormCombo>::decode(EncodedValue& encodedValue, std::unique_ptr<Test::FormCombo>& input)
{
    PlatformEvent::Type eventType;
    if (!encodedValue.get<PlatformEvent::Type>(ASCIILiteral("eventType"), eventType))
        return false;

    WebCore::FormData::Type formType;
    if (!encodedValue.get<WebCore::FormData::Type>(ASCIILiteral("formType"), formType))
        return false;

    input = std::make_unique<Test::FormCombo>(eventType, formType);
    return true;
}
EncodedValue EncodingTraits<WebCore::FormData::Type>::encodeValue(const WebCore::FormData::Type& enumValue)
{
    EncodedValue encodedValue = EncodedValue::createArray();
    if (enumValue & WebCore::FormData::Text) {
        encodedValue.append<String>(ASCIILiteral("Text"));
        if (enumValue == WebCore::FormData::Text)
            return encodedValue;
    }
    if (enumValue & WebCore::FormData::Blob) {
        encodedValue.append<String>(ASCIILiteral("Blob"));
        if (enumValue == WebCore::FormData::Blob)
            return encodedValue;
    }
    return encodedValue;
}

bool EncodingTraits<WebCore::FormData::Type>::decodeValue(EncodedValue& encodedValue, WebCore::FormData::Type& enumValue)
{
    Vector<String> enumStrings;
    if (!EncodingTraits<Vector<String>>::decodeValue(encodedValue, enumStrings))
        return false;

    for (String enumString : enumStrings) {
        if (enumString == "Text")
            enumValue = static_cast<WebCore::FormData::Type>(enumValue | WebCore::FormData::Text);
        if (enumString == "Blob")
            enumValue = static_cast<WebCore::FormData::Type>(enumValue | WebCore::FormData::Blob);
    }

    return true;
}

EncodedValue EncodingTraits<PlatformEvent::Type>::encodeValue(const PlatformEvent::Type& enumValue)
{
    EncodedValue encodedValue = EncodedValue::createArray();
    if (enumValue & PlatformEvent::Mouse) {
        encodedValue.append<String>(ASCIILiteral("Mouse"));
        if (enumValue == PlatformEvent::Mouse)
            return encodedValue;
    }
    if (enumValue & PlatformEvent::Keyboard) {
        encodedValue.append<String>(ASCIILiteral("Keyboard"));
        if (enumValue == PlatformEvent::Keyboard)
            return encodedValue;
    }
    return encodedValue;
}

bool EncodingTraits<PlatformEvent::Type>::decodeValue(EncodedValue& encodedValue, PlatformEvent::Type& enumValue)
{
    Vector<String> enumStrings;
    if (!EncodingTraits<Vector<String>>::decodeValue(encodedValue, enumStrings))
        return false;

    for (String enumString : enumStrings) {
        if (enumString == "Mouse")
            enumValue = static_cast<PlatformEvent::Type>(enumValue | PlatformEvent::Mouse);
        if (enumString == "Keyboard")
            enumValue = static_cast<PlatformEvent::Type>(enumValue | PlatformEvent::Keyboard);
    }

    return true;
}
} // namespace JSC

#endif // ENABLE(WEB_REPLAY)
