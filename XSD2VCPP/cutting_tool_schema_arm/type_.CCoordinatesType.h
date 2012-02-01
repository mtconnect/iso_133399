#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCoordinatesType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCoordinatesType



namespace cutting_tool_schema_arm
{

class CCoordinatesType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CCoordinatesType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CCoordinatesType(CCoordinatesType const& init);
	void operator=(CCoordinatesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCoordinatesType); }
	cutting_tool_schema_arm_EXPORT void operator=(const string_type& value);
	cutting_tool_schema_arm_EXPORT operator string_type();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCoordinatesType
