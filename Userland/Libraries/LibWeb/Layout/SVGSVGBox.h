/*
 * Copyright (c) 2020, Matthew Olsson <mattco@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibWeb/Layout/SVGGraphicsBox.h>
#include <LibWeb/SVG/SVGSVGElement.h>

namespace Web::Layout {

class SVGSVGBox final : public SVGGraphicsBox {
public:
    SVGSVGBox(DOM::Document&, SVG::SVGSVGElement&, NonnullRefPtr<CSS::StyleProperties>);
    virtual ~SVGSVGBox() override = default;

    SVG::SVGSVGElement& dom_node() { return verify_cast<SVG::SVGSVGElement>(SVGGraphicsBox::dom_node()); }

    virtual bool can_have_children() const override { return true; }

    virtual RefPtr<Painting::Paintable> create_paintable() const override;
};

}
