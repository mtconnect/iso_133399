#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAxis_2Type
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAxis_2Type



namespace cutting_tool_schema_arm
{

class CAxis_2Type : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAxis_2Type(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAxis_2Type(CAxis_2Type const& init);
	void operator=(CAxis_2Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAxis_2Type); }
	MemberElement<CDirection, _altova_mi_altova_CAxis_2Type_altova_Direction> Direction;
	struct Direction { typedef Iterator<CDirection> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAxis_2Type
