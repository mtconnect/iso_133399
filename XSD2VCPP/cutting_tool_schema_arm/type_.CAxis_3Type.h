#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAxis_3Type
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAxis_3Type



namespace cutting_tool_schema_arm
{

class CAxis_3Type : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAxis_3Type(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAxis_3Type(CAxis_3Type const& init);
	void operator=(CAxis_3Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAxis_3Type); }
	MemberElement<CDirection, _altova_mi_altova_CAxis_3Type_altova_Direction> Direction;
	struct Direction { typedef Iterator<CDirection> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAxis_3Type
