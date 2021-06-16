#pragma once

#include "CodeBase/Layer.h"

#include "CodeBase/Events/MouseEvent.h"
#include "CodeBase/Events/KeyEvent.h"
#include "CodeBase/Events/ApplicationEvent.h"

namespace CodeBase {

	class ImGuiLayer : public Layer {
	public:
		ImGuiLayer();
		~ImGuiLayer();

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnImGuiRender() override;

		void Begin();
		void End();
	private:
		float m_Time = 0.0f;
	};

}